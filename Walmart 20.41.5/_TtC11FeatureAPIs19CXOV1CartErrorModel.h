//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _TtC11FeatureAPIs19CXOV1CartErrorModel : NSObject
{
    // Error parsing type: , name: code
    // Error parsing type: , name: status
    // Error parsing type: , name: diagnosticMessage
    // Error parsing type: , name: clientTitle
    // Error parsing type: , name: clientMessage
    // Error parsing type: , name: maxQuantityErrors
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) _Bool isMaxQuantityError;
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCode:(id)arg1 status:(unsigned long long)arg2 diagnosticMessage:(id)arg3 clientTitle:(id)arg4 clientMessage:(id)arg5;
@property(nonatomic, readonly) NSString *clientMessage;
@property(nonatomic, readonly) NSString *clientTitle;
@property(nonatomic, readonly) NSString *diagnosticMessage;
@property(nonatomic, readonly) NSString *code;

@end
