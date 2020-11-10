//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTUploadProcessor-Protocol.h>

@class GIMMe, NSArray, NSString, YTUploadHandle;

@interface YTUploadCreateTransferProcessor : NSObject <YTUploadProcessor>
{
    YTUploadHandle *_handle;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)registerUploadWithHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isRetryableError:(id)arg1;
@property(readonly, nonatomic) NSArray *retryPattern;
- (void)cancel;
- (void)cleanupWithTask:(id)arg1 undo:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)requirementsForCleanupWithUndo:(_Bool)arg1;
- (void)executeWithTask:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)canExecuteWithTask:(id)arg1;
@property(readonly, nonatomic) long long requirements;
@property(readonly, nonatomic) int processorType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

