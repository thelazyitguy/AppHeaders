//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol MDXViewObserver <NSObject>

@optional
- (void)didAnimateMDXWatchViewToLayout:(int)arg1;
- (void)didStartAnimatingMDXWatchViewFromLayout:(int)arg1 toLayout:(int)arg2;
- (void)didStartAnimatingEmbeddedMDXViewToHeight:(double)arg1 withDuration:(double)arg2;
@end
