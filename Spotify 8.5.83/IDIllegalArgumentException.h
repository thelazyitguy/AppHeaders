//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface IDIllegalArgumentException : NSObject
{
    NSNumber *_errorId;
    NSString *_errorMsg;
}

+ (id)objectWithCustom:(id)arg1;
+ (id)fullQualifiedName;
- (void).cxx_destruct;
@property(retain) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(retain) NSNumber *errorId; // @synthesize errorId=_errorId;
- (id)description;
- (id)BMW_etchObject;
- (id)initWithErrorId:(id)arg1 errorMsg:(id)arg2;

@end

