//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNAnnotationProtocol-Protocol.h"

@class NSString;
@protocol DYNDriveMetadataProtocol, DYNFormatMetadataProtocol, DYNGroupRetentionSettingsUpdatedProtocol, DYNGsuiteIntegrationMetadataProtocol, DYNMembershipChangedMetadataProtocol, DYNRoomUpdatedMetadataProtocol, DYNSlashCommandMetadataProtocol, DYNUploadMetadataProtocol, DYNUrlMetadataProtocol, DYNUserMentionMetadataProtocol, DYNVideoCallMetadataProtocol, DYNYoutubeMetadataProtocol;

@interface DYNQuoteAnnotationImpl : NSObject <DYNAnnotationProtocol>
{
    struct _NSRange _range;
}

- (id)toNoFixAnnotation;
@property(readonly, nonatomic) id <DYNRoomUpdatedMetadataProtocol> roomUpdatedMetadata;
@property(readonly, nonatomic) id <DYNGroupRetentionSettingsUpdatedProtocol> groupRetentionSettingsUpdated;
@property(readonly, nonatomic) id <DYNGsuiteIntegrationMetadataProtocol> gsuiteIntegrationMetadata;
@property(readonly, nonatomic) id <DYNYoutubeMetadataProtocol> youtubeMetadata;
@property(readonly, nonatomic) id <DYNVideoCallMetadataProtocol> videoCallMetadata;
@property(readonly, nonatomic) id <DYNSlashCommandMetadataProtocol> slashCommandMetadata;
@property(readonly, nonatomic) id <DYNUserMentionMetadataProtocol> userMentionMetadata;
@property(readonly, nonatomic) id <DYNUploadMetadataProtocol> uploadMetadata;
@property(readonly, nonatomic) id <DYNUrlMetadataProtocol> urlMetadata;
@property(readonly, nonatomic) id <DYNMembershipChangedMetadataProtocol> membershipChanged;
@property(readonly, nonatomic) id <DYNFormatMetadataProtocol> formatMetadata;
@property(readonly, nonatomic) id <DYNDriveMetadataProtocol> driveMetadata;
@property(readonly, nonatomic) _Bool serverInvalidated;
@property(readonly, nonatomic) NSString *uniqueId;
@property(readonly, nonatomic) NSString *localId;
@property(readonly, nonatomic) int length;
@property(readonly, nonatomic) int startIndex;
@property(readonly, nonatomic) int chipRenderType;
@property(readonly, nonatomic) int type;
@property(readonly, nonatomic) int metadataCase;
- (id)toBuilder;
- (id)initWithRange:(struct _NSRange)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
