//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LPAccount, NSString;

@interface ChallengeSite : NSObject
{
    NSString *realdomain2lvl;
    NSString *id;
    NSString *sfid;
    _Bool genpw;
    int challenge_numduplicates;
    int _vuln;
    double challenge_duplicatescore;
    double challenge_scorefinal;
    double challenge_score;
    LPAccount *_acct;
    NSString *_usernamedec;
    NSString *_passworddec;
    NSString *_passworddecfix;
    NSString *_domain2lvl;
}

- (void).cxx_destruct;
@property(nonatomic) int vuln; // @synthesize vuln=_vuln;
@property(retain, nonatomic) NSString *domain2lvl; // @synthesize domain2lvl=_domain2lvl;
@property(retain, nonatomic) NSString *passworddecfix; // @synthesize passworddecfix=_passworddecfix;
@property(retain, nonatomic) NSString *passworddec; // @synthesize passworddec=_passworddec;
@property(retain, nonatomic) NSString *usernamedec; // @synthesize usernamedec=_usernamedec;
@property(retain, nonatomic) LPAccount *acct; // @synthesize acct=_acct;
@property(nonatomic) double challenge_score; // @synthesize challenge_score;
@property(nonatomic) double challenge_scorefinal; // @synthesize challenge_scorefinal;
@property(nonatomic) double challenge_duplicatescore; // @synthesize challenge_duplicatescore;
@property(nonatomic) int challenge_numduplicates; // @synthesize challenge_numduplicates;
- (long long)scoreCompare:(id)arg1;
- (long long)localizedCaseInsensitiveCompare:(id)arg1;

@end

