//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSURL;

@interface SPTCanvasContentLayerVideoPreloaderResult : NSObject
{
    NSURL *_assetURL;
    double _assetDuration;
    NSError *_error;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) double assetDuration; // @synthesize assetDuration=_assetDuration;
@property(readonly, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
- (id)initWithAssetURL:(id)arg1 assetDuration:(double)arg2 error:(id)arg3;

@end

