//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/NSObject-Protocol.h>

@class PTVChatTableModel, PTVMessage;

@protocol PTVChatTableModelObserver <NSObject>

@optional
- (void)chatTableModelDidUpdateNumberOfUnreadMessages:(PTVChatTableModel *)arg1;
- (void)chatTableModel:(PTVChatTableModel *)arg1 didAppendMessage:(PTVMessage *)arg2;
- (void)chatTableModelDidReloadMessages:(PTVChatTableModel *)arg1;
@end

