//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIChannelProfileDescriptionEditorRenderer, YTIChannelProfileNameEditorRenderer;

@interface YTIChannelProfileFieldEditorSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIChannelProfileDescriptionEditorRenderer *channelProfileDescriptionEditorRenderer; // @dynamic channelProfileDescriptionEditorRenderer;
@property(retain, nonatomic) YTIChannelProfileNameEditorRenderer *channelProfileNameEditorRenderer; // @dynamic channelProfileNameEditorRenderer;
@property(readonly, nonatomic) int rendererOneOfCase; // @dynamic rendererOneOfCase;

@end

