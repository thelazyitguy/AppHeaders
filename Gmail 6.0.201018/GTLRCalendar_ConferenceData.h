//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRCalendar_ConferenceParameters, GTLRCalendar_ConferenceSolution, GTLRCalendar_CreateConferenceRequest, NSArray, NSString;

@interface GTLRCalendar_ConferenceData : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(copy, nonatomic) NSString *conferenceId; // @dynamic conferenceId;
@property(retain, nonatomic) GTLRCalendar_ConferenceSolution *conferenceSolution; // @dynamic conferenceSolution;
@property(retain, nonatomic) NSArray *conferences; // @dynamic conferences;
@property(retain, nonatomic) GTLRCalendar_CreateConferenceRequest *createRequest; // @dynamic createRequest;
@property(copy, nonatomic) NSString *notes; // @dynamic notes;
@property(retain, nonatomic) GTLRCalendar_ConferenceParameters *parameters; // @dynamic parameters;
@property(copy, nonatomic) NSString *signature; // @dynamic signature;

@end

