//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class ADDONSFormAction, ADDONSOpenDrivePicker, ADDONSOpenLink, ADDONSPushCard, NSString;

@interface ADDONSOnClick : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ADDONSFormAction *action; // @dynamic action;
@property(readonly, nonatomic) int dataOneOfCase; // @dynamic dataOneOfCase;
@property(copy, nonatomic) NSString *link; // @dynamic link;
@property(retain, nonatomic) ADDONSOpenDrivePicker *openDrivePicker; // @dynamic openDrivePicker;
@property(retain, nonatomic) ADDONSOpenLink *openLink; // @dynamic openLink;
@property(retain, nonatomic) ADDONSFormAction *openLinkAction; // @dynamic openLinkAction;
@property(retain, nonatomic) ADDONSPushCard *pushCard; // @dynamic pushCard;

@end

