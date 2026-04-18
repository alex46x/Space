import face_recognition
import os
import cv2

# -------- SETTINGS --------
DATASET_PATH = "dataset"
TARGET_IMAGE_PATH = "target.jpg"
OUTPUT_FOLDER = "output"
TOLERANCE = 0.5   # lower = strict match

# -------- CREATE OUTPUT FOLDER --------
if not os.path.exists(OUTPUT_FOLDER):
    os.makedirs(OUTPUT_FOLDER)

# -------- LOAD TARGET IMAGE --------
print("[INFO] Loading target image...")
target_image = face_recognition.load_image_file(TARGET_IMAGE_PATH)
target_encodings = face_recognition.face_encodings(target_image)

if len(target_encodings) == 0:
    print("[ERROR] No face found in target image!")
    exit()

target_encoding = target_encodings[0]

print("[INFO] Searching for matches...\n")

# -------- SEARCH IN DATASET --------
match_count = 0

for file in os.listdir(DATASET_PATH):
    path = os.path.join(DATASET_PATH, file)

    try:
        image = face_recognition.load_image_file(path)
        encodings = face_recognition.face_encodings(image)

        if len(encodings) == 0:
            continue

        for encoding in encodings:
            results = face_recognition.compare_faces(
                [target_encoding], encoding, tolerance=TOLERANCE
            )

            if results[0]:
                match_count += 1
                print(f"[MATCH] Found in: {file}")

                # Save matched image
                img = cv2.imread(path)
                save_path = os.path.join(OUTPUT_FOLDER, file)
                cv2.imwrite(save_path, img)

                break

    except Exception as e:
        print(f"[ERROR] Skipping {file}: {e}")

print("\n[INFO] Done!")
print(f"[INFO] Total Matches Found: {match_count}")
print(f"[INFO] Saved in '{OUTPUT_FOLDER}' folder")