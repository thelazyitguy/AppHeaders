//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIImpressionEvent, SPTUBIMobileShareMenu_Toolbar_CloseButtonEventFactory, SPTUBIMobileShareMenu_Toolbar_TitleLabelEventFactory;

@protocol SPTUBIMobileShareMenu_ToolbarEventFactory <NSObject>
- (id <SPTUBIImpressionEvent>)impression;
- (id <SPTUBIMobileShareMenu_Toolbar_TitleLabelEventFactory>)titleLabelFactory;
- (id <SPTUBIMobileShareMenu_Toolbar_CloseButtonEventFactory>)closeButtonFactory;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end
