//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class A9VSOccipitalResult, A9VSStyleResult, FlowResult;
@protocol A9VSScanDataHandlerListener;

@protocol A9VSScanDataHandler <NSObject>
- (void)beginResolutionForStyleResult:(A9VSStyleResult *)arg1;
- (void)beginResolutionForOccipitalResult:(A9VSOccipitalResult *)arg1;
- (void)beginResolutionForTarget:(FlowResult *)arg1;
- (void)removeListener:(id <A9VSScanDataHandlerListener>)arg1;
- (void)addListener:(id <A9VSScanDataHandlerListener>)arg1;
@end
