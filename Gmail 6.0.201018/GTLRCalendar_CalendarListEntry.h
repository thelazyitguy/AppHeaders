//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRCalendar_CalendarListEntry_NotificationSettings, GTLRCalendar_ConferenceProperties, NSArray, NSNumber, NSString;

@interface GTLRCalendar_CalendarListEntry : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;
+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(copy, nonatomic) NSString *ETag; // @dynamic ETag;
@property(copy, nonatomic) NSString *accessRole; // @dynamic accessRole;
@property(copy, nonatomic) NSString *backgroundColor; // @dynamic backgroundColor;
@property(retain, nonatomic) NSArray *categories; // @dynamic categories;
@property(copy, nonatomic) NSString *colorId; // @dynamic colorId;
@property(retain, nonatomic) GTLRCalendar_ConferenceProperties *conferenceProperties; // @dynamic conferenceProperties;
@property(retain, nonatomic) NSArray *defaultAllDayReminders; // @dynamic defaultAllDayReminders;
@property(retain, nonatomic) NSArray *defaultReminders; // @dynamic defaultReminders;
@property(retain, nonatomic) NSNumber *deleted; // @dynamic deleted;
@property(copy, nonatomic) NSString *descriptionProperty; // @dynamic descriptionProperty;
@property(copy, nonatomic) NSString *foregroundColor; // @dynamic foregroundColor;
@property(retain, nonatomic) NSNumber *hidden; // @dynamic hidden;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *kind; // @dynamic kind;
@property(copy, nonatomic) NSString *location; // @dynamic location;
@property(retain, nonatomic) GTLRCalendar_CalendarListEntry_NotificationSettings *notificationSettings; // @dynamic notificationSettings;
@property(retain, nonatomic) NSNumber *primary; // @dynamic primary;
@property(retain, nonatomic) NSNumber *selected; // @dynamic selected;
@property(copy, nonatomic) NSString *summary; // @dynamic summary;
@property(copy, nonatomic) NSString *summaryOverride; // @dynamic summaryOverride;
@property(copy, nonatomic) NSString *timeZone; // @dynamic timeZone;

@end
