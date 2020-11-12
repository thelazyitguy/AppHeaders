//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC6Reddit16MediaNodeFactory : NSObject
{
}

+ (double)recommendedMediaHeightWithPost:(id)arg1 width:(double)arg2 maxHeight:(double)arg3;
+ (id)createMediaNodeOnCrosspostViewWithViewContext:(id)arg1 post:(id)arg2 options:(id)arg3 size:(struct CGSize)arg4;
+ (id)createMediaNodeOnChatPostViewWithViewContext:(id)arg1 post:(id)arg2 options:(id)arg3 size:(struct CGSize)arg4;
+ (id)createMediaNodeForPostCreationWithViewContext:(id)arg1 url:(id)arg2 size:(struct CGSize)arg3 previewURL:(id)arg4 analyticsScreenViewContext:(id)arg5;
+ (id)createMediaNodeOnCarouselWithViewContext:(id)arg1 post:(id)arg2 options:(id)arg3 size:(struct CGSize)arg4;
+ (id)createMediaNodeForRichTextVideoElementWithViewContext:(id)arg1 videoElement:(id)arg2 size:(struct CGSize)arg3;
+ (id)createMediaNodeOnTheatreWithViewContext:(id)arg1 theatreMediaItem:(id)arg2 options:(id)arg3 size:(struct CGSize)arg4 delegate:(id)arg5;
+ (id)createMediaNodeForPostDetailAdWithViewContext:(id)arg1 post:(id)arg2 options:(id)arg3 size:(struct CGSize)arg4 delegate:(id)arg5;
+ (id)createMediaNodeOnPostDetailWithViewContext:(id)arg1 post:(id)arg2 powerupsInfo:(id)arg3 options:(id)arg4 size:(struct CGSize)arg5 delegate:(id)arg6;
+ (id)createMediaNodeOnFeedWithViewContext:(id)arg1 post:(id)arg2 powerupsInfo:(id)arg3 options:(id)arg4 size:(struct CGSize)arg5 delegate:(id)arg6;
- (id)init;

@end
