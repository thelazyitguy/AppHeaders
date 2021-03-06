//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BAMCheckout/NSCopying-Protocol.h>

@class NSString;

@interface BAMInputField : NSObject <NSCopying>
{
    _Bool _secureTextEntry;
    _Bool _editable;
    long long _maxInputLength;
    NSString *_inputRegex;
    NSString *_accessibilityIdentifier;
    long long _keyboardType;
    long long _returnKeyType;
    NSString *_placeholder;
    long long _autocapitalizationType;
    long long _rowId;
    NSString *_value;
}

@property(nonatomic) _Bool editable; // @synthesize editable=_editable;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) long long rowId; // @synthesize rowId=_rowId;
@property(nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) _Bool secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(retain, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(retain, nonatomic) NSString *inputRegex; // @synthesize inputRegex=_inputRegex;
@property(nonatomic) long long maxInputLength; // @synthesize maxInputLength=_maxInputLength;
- (void).cxx_destruct;
- (_Bool)isValid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

