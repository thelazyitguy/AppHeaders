//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, ORCH2ImageContent;

@interface ORCH2DropdownMenuItemData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ORCH2ImageContent *endIcon; // @dynamic endIcon;
@property(nonatomic) _Bool hasEndIcon; // @dynamic hasEndIcon;
@property(nonatomic) _Bool hasStartIcon; // @dynamic hasStartIcon;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(retain, nonatomic) ORCH2ImageContent *startIcon; // @dynamic startIcon;
@property(copy, nonatomic) NSString *text; // @dynamic text;

@end
