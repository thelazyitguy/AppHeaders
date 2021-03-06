//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class FBAdDataModel, NSDictionary, NSURL;

@protocol FBAdViewNavigationPolicy <NSObject>
@property(nonatomic, getter=isMarkupImpressionEventReceived) _Bool markupImpressionEventReceived;
@property(nonatomic, getter=isModalViewPresenting) _Bool modalViewPresenting;
- (_Bool)processRequestURL:(NSURL *)arg1 adDataModel:(FBAdDataModel *)arg2 withExtraData:(NSDictionary *)arg3;

@optional
- (void)ensureViewabilityValidation;
@end

