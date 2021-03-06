//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class ALAsset, DraftAttachment, JBTMessageAttachment_Type, NSString, UIImage;
@protocol GBTClient, JBTConversationMessage, JBTConversationMessageDraft;

@protocol GBTFileUploadingService
- (NSString *)filenameWithImage:(UIImage *)arg1;
- (NSString *)filenameWithAsset:(ALAsset *)arg1;
- (_Bool)isUploadingForAttachmentId:(NSString *)arg1;
- (void)cancelUploadForAttachmentId:(NSString *)arg1;
- (long long)maxUploadFileSizeInBytes;
- (_Bool)hasAttachmentsWithType:(JBTMessageAttachment_Type *)arg1 inMessage:(id <JBTConversationMessage>)arg2;
- (void)uploadWithAttachment:(DraftAttachment *)arg1 toDraft:(id <JBTConversationMessageDraft>)arg2 draftServerPermId:(NSString *)arg3 client:(id <GBTClient>)arg4 completion:(void (^)(id <JBTMessageAttachment>, NSError *))arg5 progress:(void (^)(long long, long long, long long))arg6;
@end

