//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASAbstractLayoutController.h"

@class UITableView;

@interface ASTableLayoutController : ASAbstractLayoutController
{
    UITableView *_tableView;
}

@property(readonly, nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)allElementsForScrolling:(long long)arg1 rangeMode:(long long)arg2 displaySet:(id *)arg3 preloadSet:(id *)arg4 map:(id)arg5;
- (id)elementsForScrolling:(long long)arg1 rangeMode:(long long)arg2 rangeType:(long long)arg3 map:(id)arg4;
- (id)initWithTableView:(id)arg1;

@end
