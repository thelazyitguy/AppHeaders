//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRCalendar_RsvpActionUserResponse, NSArray, NSString;

@interface GTLRCalendar_RsvpAction : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(copy, nonatomic) NSString *additionalGuestField; // @dynamic additionalGuestField;
@property(copy, nonatomic) NSString *calendarId; // @dynamic calendarId;
@property(copy, nonatomic) NSString *commentField; // @dynamic commentField;
@property(retain, nonatomic) NSArray *rsvpResponses; // @dynamic rsvpResponses;
@property(copy, nonatomic) NSString *selectedRsvpResponseType; // @dynamic selectedRsvpResponseType;
@property(retain, nonatomic) GTLRCalendar_RsvpActionUserResponse *userResponse; // @dynamic userResponse;
@property(copy, nonatomic) NSString *userResponseState; // @dynamic userResponseState;

@end

