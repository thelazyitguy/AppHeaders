//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/VSOverlayRenderer-Protocol.h>

@class NSString, TOKImageOverlay;

@interface TOKImageOverlayRenderer : NSObject <VSOverlayRenderer>
{
    TOKImageOverlay *_overlay;
}

- (void).cxx_destruct;
- (void)renderToCGContext:(struct CGContext *)arg1 frameIndex:(unsigned long long)arg2 overlayContext:(id)arg3;
- (id)initWithOverlay:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

