//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICImageDownloadDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface UICImageDownloader : NSObject <UICImageDownloadDelegate>
{
    _Bool _prefetching;
    NSMutableDictionary *_operations;
    NSMutableArray *_queuedPrefetches;
}

+ (id)sharedManager;
@property(nonatomic) _Bool prefetching; // @synthesize prefetching=_prefetching;
@property(retain, nonatomic) NSMutableArray *queuedPrefetches; // @synthesize queuedPrefetches=_queuedPrefetches;
@property(retain, nonatomic) NSMutableDictionary *operations; // @synthesize operations=_operations;
- (void).cxx_destruct;
- (void)handleMemoryWarning;
- (void)startPrefetch;
- (void)startDownloadWithURL:(id)arg1 loggingDelegate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)imageDownloadDidFinish:(id)arg1;
- (void)cancelDownloadWithURL:(id)arg1;
- (id)cachedImageForURL:(id)arg1;
- (void)prefetchImagesWithURLs:(id)arg1;
- (void)checkImageDownloadWithURLs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadImageWithURL:(id)arg1 loggingDelegate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
