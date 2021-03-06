//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCharacterSet, NSString;

@interface LLJsonTokenizer : NSObject
{
    NSString *_json;
    int _cursor;
    NSCharacterSet *_whitespaceCharacters;
    NSCharacterSet *_controlCharacters;
    NSCharacterSet *_numberCharacters;
    NSCharacterSet *_notNumberCharacters;
    long long _tokenType;
    id _tokenValue;
}

+ (id)tokenizerWithJson:(id)arg1;
- (void).cxx_destruct;
- (int)nextNumberLastCharacterIndex;
- (int)nextStringLastCharacterIndex;
- (_Bool)tokenMatchesType:(long long)arg1 andValue:(id)arg2;
- (_Bool)tokenMatchesType:(long long)arg1;
- (_Bool)nextValueInto:(id *)arg1;
- (_Bool)collectionHasNextItem;
- (_Bool)nextObjectInto:(id)arg1;
- (_Bool)nextArrayInto:(id)arg1;
- (_Bool)nextToken;
- (id)initWithJson:(id)arg1;

@end

