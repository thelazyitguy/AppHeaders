//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDateFormatter, NSString;

@interface PSTAboutRowData : NSObject
{
    NSDateFormatter *_eventDateFormatter;
    NSArray *_data;
    long long _dataType;
    NSString *_title;
    NSArray *_contents;
    NSArray *_descriptions;
}

+ (id)dayLongEventFromDate:(id)arg1;
+ (id)shortEventDateFormatter;
+ (id)longEventDateFormatter;
+ (id)rowDataWithType:(long long)arg1 dataArray:(id)arg2 title:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *descriptions; // @synthesize descriptions=_descriptions;
@property(readonly, nonatomic) NSArray *contents; // @synthesize contents=_contents;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) long long dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) NSArray *data; // @synthesize data=_data;
- (id)descriptionArray;
- (id)contentArray;
- (id)initWithType:(long long)arg1 data:(id)arg2 title:(id)arg3;

@end
