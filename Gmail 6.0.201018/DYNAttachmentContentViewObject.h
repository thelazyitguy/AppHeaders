//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentViewObject.h"

@class DYNMessageViewNavigationHelper, NSString;
@protocol DYNAttachmentContentViewObjectDelegate, DYNDriveMetadataProtocol, DYNUploadMetadataProtocol, DYNUrlMetadataProtocol, DYNVideoCallMetadataProtocol, DYNYoutubeMetadataProtocol, GIPAccountID;

@interface DYNAttachmentContentViewObject : GOOBaseContentViewObject
{
    NSString *_localID;
    id <DYNUploadMetadataProtocol> _uploadMetadata;
    id <DYNDriveMetadataProtocol> _driveMetadata;
    id <DYNUrlMetadataProtocol> _urlMetadata;
    id <DYNYoutubeMetadataProtocol> _youtubeMetadata;
    id <DYNVideoCallMetadataProtocol> _videoCallMetadata;
    id <DYNAttachmentContentViewObjectDelegate> delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <DYNAttachmentContentViewObjectDelegate> delegate; // @synthesize delegate;
@property(readonly, nonatomic) id <DYNVideoCallMetadataProtocol> videoCallMetadata; // @synthesize videoCallMetadata=_videoCallMetadata;
@property(readonly, nonatomic) id <DYNYoutubeMetadataProtocol> youtubeMetadata; // @synthesize youtubeMetadata=_youtubeMetadata;
@property(readonly, nonatomic) id <DYNUrlMetadataProtocol> urlMetadata; // @synthesize urlMetadata=_urlMetadata;
@property(readonly, nonatomic) id <DYNDriveMetadataProtocol> driveMetadata; // @synthesize driveMetadata=_driveMetadata;
@property(readonly, nonatomic) id <DYNUploadMetadataProtocol> uploadMetadata; // @synthesize uploadMetadata=_uploadMetadata;
@property(readonly, copy, nonatomic) NSString *localID; // @synthesize localID=_localID;
- (Class)contentViewClass;
- (Class)mediaContentViewClass;
- (Class)youtubeContentViewClass;
@property(readonly, copy, nonatomic) NSString *restrictedText;
- (void)viewNeedsResizeWithUpdate:(_Bool)arg1;
@property(readonly, nonatomic) id <GIPAccountID> accountID;
@property(readonly, nonatomic) unsigned int groupType;
@property(readonly, nonatomic) _Bool isMessageSent;
@property(readonly, nonatomic) __weak DYNMessageViewNavigationHelper *navigationHelper;
@property(readonly, nonatomic) _Bool isRestricted;
- (id)initWithDriveMetadata:(id)arg1;
- (id)initWithUrlMetadata:(id)arg1;
- (id)initWithYoutubeMetadata:(id)arg1;
- (id)initWithVideoCallMetadata:(id)arg1;
- (id)initWithUploadMetadata:(id)arg1;
- (id)initWithLocalID:(id)arg1;

@end
