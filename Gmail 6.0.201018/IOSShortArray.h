//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IOSArray.h"

@interface IOSShortArray : IOSArray
{
    short buffer_[0];
}

+ (id)iosClass;
+ (id)newArrayWithDimensions:(unsigned long long)arg1 lengths:(const int *)arg2;
+ (id)arrayWithDimensions:(unsigned long long)arg1 lengths:(const int *)arg2;
+ (id)arrayWithShorts:(const short *)arg1 count:(unsigned long long)arg2;
+ (id)newArrayWithShorts:(const short *)arg1 count:(unsigned long long)arg2;
+ (id)arrayWithLength:(unsigned long long)arg1;
+ (id)newArrayWithLength:(unsigned long long)arg1;
- (id)descriptionOfElementAtIndex:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)arraycopy:(int)arg1 destination:(id)arg2 dstOffset:(int)arg3 length:(int)arg4;
- (id)elementType;
- (void *)buffer;
- (void)getShorts:(short *)arg1 length:(unsigned long long)arg2;
- (short)replaceShortAtIndex:(unsigned long long)arg1 withShort:(short)arg2;
- (short *)shortRefAtIndex:(unsigned long long)arg1;
- (short)shortAtIndex:(unsigned long long)arg1;

@end
