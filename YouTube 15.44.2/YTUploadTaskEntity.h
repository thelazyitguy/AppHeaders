//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSArray, NSData, NSDate, NSDictionary, NSNumber, NSString, NSURL, YTUploadMetadata, YTUploadOperationStateEntity;

@interface YTUploadTaskEntity : NSManagedObject
{
}

+ (id)createEntityInContext:(id)arg1;
+ (id)name;
- (id)iosguardChallengeData;
- (void)resetProcessorStates;
@property(nonatomic) int videoStatus; // @dynamic videoStatus;
@property(retain, nonatomic) NSURL *transcodeURL; // @dynamic transcodeURL;
@property(retain, nonatomic) NSURL *assetURL; // @dynamic assetURL;
- (void)setEditInstructions:(id)arg1;
- (id)uploadEditInstructions;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
- (id)uploadTask;
@property(retain, nonatomic) YTUploadMetadata *metadata;

// Remaining properties
@property(retain, nonatomic) YTUploadOperationStateEntity *assetCopyState; // @dynamic assetCopyState;
@property(copy, nonatomic) NSArray *assetSegmentURLs; // @dynamic assetSegmentURLs;
@property(retain, nonatomic) YTUploadOperationStateEntity *cancelState; // @dynamic cancelState;
@property(nonatomic) int cancellationReason; // @dynamic cancellationReason;
@property(nonatomic) _Bool cancelling; // @dynamic cancelling;
@property(retain, nonatomic) YTUploadOperationStateEntity *createDraftState; // @dynamic createDraftState;
@property(retain, nonatomic) YTUploadOperationStateEntity *createReelItemsState; // @dynamic createReelItemsState;
@property(retain, nonatomic) YTUploadOperationStateEntity *createTransferState; // @dynamic createTransferState;
@property(retain, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(retain, nonatomic) YTUploadOperationStateEntity *deleteVideoState; // @dynamic deleteVideoState;
@property(nonatomic) double duration; // @dynamic duration;
@property(nonatomic) double editInstructionsAspectRatioHeight; // @dynamic editInstructionsAspectRatioHeight;
@property(nonatomic) double editInstructionsAspectRatioWidth; // @dynamic editInstructionsAspectRatioWidth;
@property(nonatomic) double editInstructionsAudioSwapDuration; // @dynamic editInstructionsAudioSwapDuration;
@property(nonatomic) double editInstructionsAudioSwapOffset; // @dynamic editInstructionsAudioSwapOffset;
@property(nonatomic) _Bool editInstructionsAudioSwapRepeat; // @dynamic editInstructionsAudioSwapRepeat;
@property(copy, nonatomic) NSString *editInstructionsAudioSwapTrackID; // @dynamic editInstructionsAudioSwapTrackID;
@property(copy, nonatomic) NSString *editInstructionsAudioSwapURL; // @dynamic editInstructionsAudioSwapURL;
@property(nonatomic) double editInstructionsAudioSwapVolume; // @dynamic editInstructionsAudioSwapVolume;
@property(copy, nonatomic) NSString *editInstructionsEffectId; // @dynamic editInstructionsEffectId;
@property(nonatomic) _Bool editInstructionsMute; // @dynamic editInstructionsMute;
@property(copy, nonatomic) NSString *editInstructionsOverlayImageURL; // @dynamic editInstructionsOverlayImageURL;
@property(copy, nonatomic) NSDictionary *editInstructionsSlomoData; // @dynamic editInstructionsSlomoData;
@property(copy, nonatomic) NSArray *editInstructionsStickerModels; // @dynamic editInstructionsStickerModels;
@property(nonatomic) double editInstructionsTrimRangeDuration; // @dynamic editInstructionsTrimRangeDuration;
@property(nonatomic) double editInstructionsTrimRangeStart; // @dynamic editInstructionsTrimRangeStart;
@property(nonatomic) _Bool failed; // @dynamic failed;
@property(nonatomic) int flowPhase; // @dynamic flowPhase;
@property(copy, nonatomic) NSString *frontendUploadID; // @dynamic frontendUploadID;
@property(copy, nonatomic) NSArray *interactiveStickers; // @dynamic interactiveStickers;
@property(copy, nonatomic) NSString *iosguardChallengeKey; // @dynamic iosguardChallengeKey;
@property(copy, nonatomic) NSData *iosguardChallengeResponse; // @dynamic iosguardChallengeResponse;
@property(retain, nonatomic) YTUploadOperationStateEntity *iosguardChallengeState; // @dynamic iosguardChallengeState;
@property(copy, nonatomic) NSString *iosguardChallengeValue; // @dynamic iosguardChallengeValue;
@property(copy, nonatomic) NSString *metadataDescription; // @dynamic metadataDescription;
@property(copy, nonatomic) NSString *metadataPlaceDescription; // @dynamic metadataPlaceDescription;
@property(copy, nonatomic) NSString *metadataPlaceId; // @dynamic metadataPlaceId;
@property(nonatomic) int metadataPrivacy; // @dynamic metadataPrivacy;
@property(retain, nonatomic) NSNumber *metadataPrivacyStatus; // @dynamic metadataPrivacyStatus;
@property(copy, nonatomic) NSArray *metadataTags; // @dynamic metadataTags;
@property(copy, nonatomic) NSString *metadataTitle; // @dynamic metadataTitle;
@property(copy, nonatomic) NSData *metadataUpdateRequestData; // @dynamic metadataUpdateRequestData;
@property(retain, nonatomic) NSString *phLocalIdentifier; // @dynamic phLocalIdentifier;
@property(nonatomic) _Bool photoUpload; // @dynamic photoUpload;
@property(retain, nonatomic) YTUploadOperationStateEntity *pollFeedbackState; // @dynamic pollFeedbackState;
@property(retain, nonatomic) YTUploadOperationStateEntity *processVideoState; // @dynamic processVideoState;
@property(copy, nonatomic) NSArray *reelIDs; // @dynamic reelIDs;
@property(retain, nonatomic) YTUploadOperationStateEntity *registerVideoState; // @dynamic registerVideoState;
@property(copy, nonatomic) NSString *resourceID; // @dynamic resourceID;
@property(retain, nonatomic) YTUploadOperationStateEntity *saveMetadataState; // @dynamic saveMetadataState;
@property(nonatomic) _Bool skipTranscode; // @dynamic skipTranscode;
@property(nonatomic) _Bool streamingRecordingComplete; // @dynamic streamingRecordingComplete;
@property(nonatomic) _Bool streamingUpload; // @dynamic streamingUpload;
@property(retain, nonatomic) NSURL *thumbnailURL; // @dynamic thumbnailURL;
@property(retain, nonatomic) YTUploadOperationStateEntity *transcodeState; // @dynamic transcodeState;
@property(retain, nonatomic) YTUploadOperationStateEntity *transferState; // @dynamic transferState;
@property(retain, nonatomic) NSURL *uploadLocationURL; // @dynamic uploadLocationURL;
@property(copy, nonatomic) NSData *uploadStatusRendererData; // @dynamic uploadStatusRendererData;
@property(nonatomic) int uploadType; // @dynamic uploadType;
@property(nonatomic) _Bool useUploadClient; // @dynamic useUploadClient;
@property(nonatomic) _Bool userConfirmedUpload; // @dynamic userConfirmedUpload;
@property(copy, nonatomic) NSString *userID; // @dynamic userID;
@property(copy, nonatomic) NSString *videoID; // @dynamic videoID;
@property(copy, nonatomic) NSData *videoShortsCreationData; // @dynamic videoShortsCreationData;
@property(copy, nonatomic) NSString *videoStatusLongMessage; // @dynamic videoStatusLongMessage;
@property(copy, nonatomic) NSString *videoStatusShortMessage; // @dynamic videoStatusShortMessage;

@end

