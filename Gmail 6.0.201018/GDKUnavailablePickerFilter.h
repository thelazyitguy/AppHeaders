//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKPickerFilter-Protocol.h"

@class GDKOptionalViewController, NSString, UIImage;

@interface GDKUnavailablePickerFilter : NSObject <GDKPickerFilter>
{
    NSString *_title;
    UIImage *_image;
    UIImage *_accessoryImage;
    GDKOptionalViewController *_absentBehavior;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GDKOptionalViewController *absentBehavior; // @synthesize absentBehavior=_absentBehavior;
@property(readonly, nonatomic) UIImage *accessoryImage; // @synthesize accessoryImage=_accessoryImage;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)filterCVOWithProducer:(id)arg1 viewControllerTitle:(id)arg2 dynamicTypeEnabled:(_Bool)arg3 theme:(id)arg4;
- (id)initWithHelpIconAndTitle:(id)arg1 image:(id)arg2 interactionBehavior:(CDUnknownBlockType)arg3;
- (id)initWithTitle:(id)arg1 image:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
