//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

#import <Module_Framework/YTELMCommandHandler-Protocol.h>

@class NSString;

@interface YTINitrateTooltipCommand : GPBMessage <YTELMCommandHandler>
{
}

+ (id)descriptor;
- (void)executeWithCommandContext:(id)arg1 gimme:(id)arg2 handler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasTargetId; // @dynamic hasTargetId;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *targetId; // @dynamic targetId;

@end

