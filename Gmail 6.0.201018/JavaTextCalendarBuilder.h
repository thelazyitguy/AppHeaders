//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IOSIntArray;

@interface JavaTextCalendarBuilder : NSObject
{
    IOSIntArray *field_;
    int nextStamp_;
    int maxFieldIndex_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (_Bool)isValidDayOfWeekWithInt:(int)arg1;
+ (int)toCalendarDayOfWeekWithInt:(int)arg1;
+ (int)toISODayOfWeekWithInt:(int)arg1;
- (void)dealloc;
- (id)description;
- (id)establishWithJavaUtilCalendar:(id)arg1;
- (id)clearWithInt:(int)arg1;
- (_Bool)isSetWithInt:(int)arg1;
- (id)addYearWithInt:(int)arg1;
- (id)setWithInt:(int)arg1 withInt:(int)arg2;
- (id)initPackagePrivate;

@end
