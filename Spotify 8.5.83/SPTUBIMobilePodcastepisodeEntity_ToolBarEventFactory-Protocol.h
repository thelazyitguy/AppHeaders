//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIMobilePodcastepisodeEntity_ToolBar_ContextMenuButtonEventFactory, SPTUBIMobilePodcastepisodeEntity_ToolBar_TitleLabelEventFactory;

@protocol SPTUBIMobilePodcastepisodeEntity_ToolBarEventFactory <NSObject>
- (id <SPTUBIMobilePodcastepisodeEntity_ToolBar_ContextMenuButtonEventFactory>)contextMenuButtonFactory;
- (id <SPTUBIMobilePodcastepisodeEntity_ToolBar_TitleLabelEventFactory>)titleLabelFactory;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end

