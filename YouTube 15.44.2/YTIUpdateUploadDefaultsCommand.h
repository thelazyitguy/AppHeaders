//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

#import <Module_Framework/YTELMCommandHandler-Protocol.h>

@class NSString;

@interface YTIUpdateUploadDefaultsCommand : GPBMessage <YTELMCommandHandler>
{
}

+ (id)descriptor;
+ (void)yt_registerCommandHandler;
- (void)executeWithCommandContext:(id)arg1 gimme:(id)arg2 handler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(nonatomic) int audienceSelfRating; // @dynamic audienceSelfRating;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasAudienceSelfRating; // @dynamic hasAudienceSelfRating;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
