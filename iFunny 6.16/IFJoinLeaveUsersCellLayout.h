//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IFSimpleMessageLayout.h>

@protocol IFMessageCellControllerProtocol;

@interface IFJoinLeaveUsersCellLayout : IFSimpleMessageLayout
{
    id <IFMessageCellControllerProtocol> _controller;
}

+ (id)descriptionFont;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IFMessageCellControllerProtocol> controller; // @synthesize controller=_controller;
- (double)spacingHeightForUserAtIndex:(unsigned long long)arg1;
- (double)rowHeightForUserAtIndex:(unsigned long long)arg1;
- (void)calculateLayout;
- (id)initWithChatItem:(id)arg1 cellWidth:(double)arg2;

@end

