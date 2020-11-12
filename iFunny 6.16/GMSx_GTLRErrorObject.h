//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/GMSx_GTLRObject.h>

@class NSArray, NSError, NSNumber, NSString;

@interface GMSx_GTLRErrorObject : GMSx_GTLRObject
{
    NSError *_originalFoundationError;
}

+ (_Bool)supportsSecureCoding;
+ (id)underlyingObjectForError:(id)arg1;
+ (id)arrayPropertyToClassMap;
+ (id)objectWithFoundationError:(id)arg1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSError *foundationError; // @dynamic foundationError;

// Remaining properties
@property(retain, nonatomic) NSNumber *code; // @dynamic code;
@property(retain, nonatomic) NSArray *details; // @dynamic details;
@property(retain, nonatomic) NSArray *errors; // @dynamic errors;
@property(retain, nonatomic) NSString *message; // @dynamic message;
@property(retain, nonatomic) NSString *status; // @dynamic status;

@end
