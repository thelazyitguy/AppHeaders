//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIPlayerAnnotationsExpandedRenderer, YTIPlayerAnnotationsUrlsRenderer;

@interface YTIAnnotationsSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIPlayerAnnotationsExpandedRenderer *playerAnnotationsExpandedRenderer; // @dynamic playerAnnotationsExpandedRenderer;
@property(retain, nonatomic) YTIPlayerAnnotationsUrlsRenderer *playerAnnotationsUrlsRenderer; // @dynamic playerAnnotationsUrlsRenderer;
@property(readonly, nonatomic) int rendererOneOfCase; // @dynamic rendererOneOfCase;

@end

