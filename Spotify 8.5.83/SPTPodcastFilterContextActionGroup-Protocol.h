//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTPodcastFilterContextAction;

@protocol SPTPodcastFilterContextActionGroup <NSObject>
@property(readonly, nonatomic) unsigned long long numberOfActions;
@property(readonly, nonatomic) long long icon;
@property(readonly, nonatomic) NSString *title;
- (id <SPTPodcastFilterContextAction>)actionAtIndex:(unsigned long long)arg1;
@end

