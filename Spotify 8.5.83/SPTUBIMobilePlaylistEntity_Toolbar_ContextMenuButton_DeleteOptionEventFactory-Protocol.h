//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIInteractionEvent, SPTUBIMobilePlaylistEntity_Toolbar_ContextMenuButton_DeleteOption_CancelEventFactory, SPTUBIMobilePlaylistEntity_Toolbar_ContextMenuButton_DeleteOption_ConfirmDeletionEventFactory;

@protocol SPTUBIMobilePlaylistEntity_Toolbar_ContextMenuButton_DeleteOptionEventFactory <NSObject>
- (id <SPTUBIInteractionEvent>)hitUiReveal;
- (id <SPTUBIMobilePlaylistEntity_Toolbar_ContextMenuButton_DeleteOption_CancelEventFactory>)cancelFactory;
- (id <SPTUBIMobilePlaylistEntity_Toolbar_ContextMenuButton_DeleteOption_ConfirmDeletionEventFactory>)confirmDeletionFactory;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end
