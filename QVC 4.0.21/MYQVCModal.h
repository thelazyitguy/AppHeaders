//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MYQVCModal : NSObject
{
    NSString *ID;
    NSString *startDateTime;
    NSString *displayText;
    NSString *DOW;
    NSString *DOWEndTime;
    NSString *DOWStartTime;
    NSString *endDateTime;
    NSMutableArray *questions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *questions; // @synthesize questions;
@property(copy, nonatomic) NSString *endDateTime; // @synthesize endDateTime;
@property(copy, nonatomic) NSString *DOWStartTime; // @synthesize DOWStartTime;
@property(copy, nonatomic) NSString *DOWEndTime; // @synthesize DOWEndTime;
@property(copy, nonatomic) NSString *DOW; // @synthesize DOW;
@property(copy, nonatomic) NSString *displayText; // @synthesize displayText;
@property(copy, nonatomic) NSString *startDateTime; // @synthesize startDateTime;
@property(copy, nonatomic) NSString *ID; // @synthesize ID;
- (id)initWithComponentData:(id)arg1;

@end
