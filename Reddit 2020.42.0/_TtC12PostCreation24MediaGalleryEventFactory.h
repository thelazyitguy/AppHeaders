//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC12PostCreation24MediaGalleryEventFactory : NSObject
{
}

+ (id)outboundURLClickEventWithPost:(id)arg1 galleryPosition:(long long)arg2 pageType:(id)arg3;
+ (id)mediaViewEventWithPost:(id)arg1 galleryPosition:(long long)arg2 pageType:(id)arg3;
+ (id)forwardClickEventWithPost:(id)arg1 galleryPosition:(long long)arg2 pageType:(id)arg3;
+ (id)backwardClickEventWithPost:(id)arg1 galleryPosition:(long long)arg2 pageType:(id)arg3;
+ (id)photoClickEvent;
+ (id)cameraClickEvent;
- (id)init;

@end

