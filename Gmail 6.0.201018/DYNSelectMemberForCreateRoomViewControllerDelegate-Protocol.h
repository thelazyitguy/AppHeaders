//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DYNSelectMemberForCreateRoomViewController, NSArray, UIViewController;

@protocol DYNSelectMemberForCreateRoomViewControllerDelegate <NSObject>
- (void)selectMemberForCreateRoomViewController:(DYNSelectMemberForCreateRoomViewController *)arg1 didChangeSelectedMembers:(NSArray *)arg2;

@optional
- (_Bool)selectMemberForCreateRoomViewController:(DYNSelectMemberForCreateRoomViewController *)arg1 didCreateRoomViewController:(UIViewController *)arg2;
@end

