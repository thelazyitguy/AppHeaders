//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSCoding-Protocol.h>
#import <Module_Framework/NSCopying-Protocol.h>
#import <Module_Framework/NSObject-Protocol.h>

@class NSArray;
@protocol TOKOverlayContext, TOKTextOverlayBackgroundRenderer;

@protocol TOKTextOverlayBackgroundRenderer <NSCoding, NSCopying, NSObject>
@property(nonatomic) struct UIEdgeInsets contentPadding;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (id <TOKTextOverlayBackgroundRenderer>)uiRendererForOverlayContext:(id <TOKOverlayContext>)arg1;
- (id <TOKTextOverlayBackgroundRenderer>)canonicalRendererForOverlayContext:(id <TOKOverlayContext>)arg1;
- (void)renderInContext:(struct CGContext *)arg1 forLineFragmentRects:(NSArray *)arg2;
@end

