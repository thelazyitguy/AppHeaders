//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilDate.h"

@interface JavaSqlTimestamp : JavaUtilDate
{
    int nanos_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)valueOfWithNSString:(id)arg1;
- (unsigned long long)hash;
- (int)compareToWithId:(id)arg1;
- (int)compareToWithJavaSqlTimestamp:(id)arg1;
- (_Bool)afterWithJavaSqlTimestamp:(id)arg1;
- (_Bool)beforeWithJavaSqlTimestamp:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)equalsWithJavaSqlTimestamp:(id)arg1;
- (void)setNanosWithInt:(int)arg1;
- (int)getNanos;
- (id)description;
- (long long)getTime;
- (void)setTimeWithLong:(long long)arg1;
- (id)initWithLong:(long long)arg1;
- (id)initWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 withInt:(int)arg6 withInt:(int)arg7;

@end

