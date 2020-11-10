//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSAttributedString, NSIndexPath, NSString, SPTContextMenuView, UIView;
@protocol GLUEImageLoader, SPTContextMenuAction;

@protocol SPTContextMenuViewDataSource <NSObject>
- (id <SPTContextMenuAction>)contextMenuView:(SPTContextMenuView *)arg1 actionForIndexPath:(NSIndexPath *)arg2;
- (unsigned long long)numberOfActionsInContextMenuView:(SPTContextMenuView *)arg1;

@optional
- (id <GLUEImageLoader>)imageLoaderForContextMenuView:(SPTContextMenuView *)arg1;
- (unsigned long long)numberOfSectionsInContextMenuView:(SPTContextMenuView *)arg1;
- (unsigned long long)contextMenuView:(SPTContextMenuView *)arg1 numberOfActionsInSection:(unsigned long long)arg2;
- (double)contextMenuView:(SPTContextMenuView *)arg1 heightForHeaderInSection:(unsigned long long)arg2;
- (UIView *)contextMenuView:(SPTContextMenuView *)arg1 viewForHeaderInSection:(unsigned long long)arg2;
- (_Bool)contextMenuView:(SPTContextMenuView *)arg1 allowMultipleLineTitleInSection:(unsigned long long)arg2;
- (NSString *)contextMenuView:(SPTContextMenuView *)arg1 titleForHeaderInSection:(unsigned long long)arg2;
- (NSAttributedString *)contextMenuView:(SPTContextMenuView *)arg1 attributedTitleForHeaderInSection:(unsigned long long)arg2;
@end
