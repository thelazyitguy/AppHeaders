//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIGetChannelProfileEditorSupportedRenderers, YTIResponseContext;

@interface YTIGetChannelProfileEditorResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIGetChannelProfileEditorSupportedRenderers *editor; // @dynamic editor;
@property(nonatomic) _Bool hasEditor; // @dynamic hasEditor;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;

@end
