//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PPOTString : NSObject
{
}

+ (id)dataWithHexString:(id)arg1;
+ (id)hexStringFromData:(id)arg1;
+ (id)generateUniquishIdentifier;
+ (unsigned long long)numberOfLinesInString:(id)arg1;
+ (id)decodeBase64WithString:(id)arg1;
+ (id)stringByBase64EncodingData:(id)arg1 lineLength:(unsigned long long)arg2;
+ (id)stringByBase64EncodingData:(id)arg1;
+ (id)stringByURLEncodingAllCharactersInString:(id)arg1;

@end
