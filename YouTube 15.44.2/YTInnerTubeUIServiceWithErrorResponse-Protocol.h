//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTInnerTubeUIService-Protocol.h>

@class NSError;

@protocol YTInnerTubeUIServiceWithErrorResponse <YTInnerTubeUIService>
- (void)handleFailedRequest:(id)arg1 error:(NSError *)arg2 responseBlock:(void (^)(id))arg3;
@end
