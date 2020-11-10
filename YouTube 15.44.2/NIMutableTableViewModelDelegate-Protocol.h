//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NITableViewModelDelegate-Protocol.h>
#import <Module_Framework/NSObject-Protocol.h>

@class NIMutableTableViewModel, NSIndexPath, UITableView;

@protocol NIMutableTableViewModelDelegate <NSObject, NITableViewModelDelegate>

@optional
- (_Bool)tableViewModel:(NIMutableTableViewModel *)arg1 shouldDeleteObject:(id)arg2 atIndexPath:(NSIndexPath *)arg3 inTableView:(UITableView *)arg4;
- (long long)tableViewModel:(NIMutableTableViewModel *)arg1 deleteRowAnimationForObject:(id)arg2 atIndexPath:(NSIndexPath *)arg3 inTableView:(UITableView *)arg4;
- (_Bool)tableViewModel:(NIMutableTableViewModel *)arg1 shouldMoveObject:(id)arg2 atIndexPath:(NSIndexPath *)arg3 toIndexPath:(NSIndexPath *)arg4 inTableView:(UITableView *)arg5;
- (_Bool)tableViewModel:(NIMutableTableViewModel *)arg1 canMoveObject:(id)arg2 atIndexPath:(NSIndexPath *)arg3 inTableView:(UITableView *)arg4;
- (_Bool)tableViewModel:(NIMutableTableViewModel *)arg1 canEditObject:(id)arg2 atIndexPath:(NSIndexPath *)arg3 inTableView:(UITableView *)arg4;
@end

