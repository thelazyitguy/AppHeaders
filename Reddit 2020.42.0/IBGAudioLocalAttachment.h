//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Instabug/IBGLocalAttachment.h>

@class NSString;

@interface IBGAudioLocalAttachment : IBGLocalAttachment
{
    NSString *fileName;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName;
- (void).cxx_destruct;
- (void)fetchAttachmentsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)prepareAttachmentAndSaveWithCompletion:(CDUnknownBlockType)arg1;
- (id)prepareAttachmentMetadata;
- (id)prepareAttachmentPath;
- (id)byline;
- (id)initWithAudio:(id)arg1;

@end

