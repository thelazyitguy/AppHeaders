//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OrgApacheJamesMime4jStreamEntityStateMachine-Protocol.h"

@class IOSByteArray, NSString, OrgApacheJamesMime4jCodecDecodeMonitor, OrgApacheJamesMime4jIoBufferedLineReaderInputStream, OrgApacheJamesMime4jIoLineReaderInputStreamAdaptor, OrgApacheJamesMime4jIoMimeBoundaryInputStream, OrgApacheJamesMime4jStreamEntityState, OrgApacheJamesMime4jStreamMimeConfig, OrgApacheJamesMime4jStreamRecursionMode, OrgApacheJamesMime4jUtilByteArrayBuffer;
@protocol OrgApacheJamesMime4jIoLineNumberSource, OrgApacheJamesMime4jStreamBodyDescriptor, OrgApacheJamesMime4jStreamBodyDescriptorBuilder, OrgApacheJamesMime4jStreamField, OrgApacheJamesMime4jStreamFieldBuilder;

@interface OrgApacheJamesMime4jStreamMimeEntity : NSObject <OrgApacheJamesMime4jStreamEntityStateMachine>
{
    OrgApacheJamesMime4jStreamEntityState *endState_;
    OrgApacheJamesMime4jStreamMimeConfig *config_;
    OrgApacheJamesMime4jCodecDecodeMonitor *monitor_;
    id <OrgApacheJamesMime4jStreamFieldBuilder> fieldBuilder_;
    id <OrgApacheJamesMime4jStreamBodyDescriptorBuilder> bodyDescBuilder_;
    OrgApacheJamesMime4jUtilByteArrayBuffer *linebuf_;
    id <OrgApacheJamesMime4jIoLineNumberSource> lineSource_;
    OrgApacheJamesMime4jIoBufferedLineReaderInputStream *inbuffer_;
    OrgApacheJamesMime4jStreamEntityState *state_;
    int lineCount_;
    _Bool endOfHeader_;
    int headerCount_;
    id <OrgApacheJamesMime4jStreamField> field_;
    id <OrgApacheJamesMime4jStreamBodyDescriptor> body_;
    OrgApacheJamesMime4jStreamRecursionMode *recursionMode_;
    OrgApacheJamesMime4jIoMimeBoundaryInputStream *currentMimePartStream_;
    OrgApacheJamesMime4jIoLineReaderInputStreamAdaptor *dataStream_;
    IOSByteArray *tmpbuf_;
}

- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)getDecodedContentStream;
- (id)getContentStream;
- (id)getField;
- (id)getBodyDescriptor;
- (id)advance;
- (_Bool)nextField;
- (void)monitorWithOrgApacheJamesMime4jStreamEvent:(id)arg1;
- (id)messageWithOrgApacheJamesMime4jStreamEvent:(id)arg1;
- (void)stop;
- (void)setRecursionModeWithOrgApacheJamesMime4jStreamRecursionMode:(id)arg1;
- (id)getRecursionMode;
- (id)getState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
