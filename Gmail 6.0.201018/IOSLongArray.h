//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IOSArray.h"

@interface IOSLongArray : IOSArray
{
    long long buffer_[0];
}

+ (id)iosClass;
+ (id)newArrayWithDimensions:(unsigned long long)arg1 lengths:(const int *)arg2;
+ (id)arrayWithDimensions:(unsigned long long)arg1 lengths:(const int *)arg2;
+ (id)arrayWithLongs:(const long long *)arg1 count:(unsigned long long)arg2;
+ (id)newArrayWithLongs:(const long long *)arg1 count:(unsigned long long)arg2;
+ (id)arrayWithLength:(unsigned long long)arg1;
+ (id)newArrayWithLength:(unsigned long long)arg1;
- (id)descriptionOfElementAtIndex:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)arraycopy:(int)arg1 destination:(id)arg2 dstOffset:(int)arg3 length:(int)arg4;
- (id)elementType;
- (void *)buffer;
- (void)getLongs:(long long *)arg1 length:(unsigned long long)arg2;
- (long long)replaceLongAtIndex:(unsigned long long)arg1 withLong:(long long)arg2;
- (long long *)longRefAtIndex:(unsigned long long)arg1;
- (long long)longAtIndex:(unsigned long long)arg1;

@end
