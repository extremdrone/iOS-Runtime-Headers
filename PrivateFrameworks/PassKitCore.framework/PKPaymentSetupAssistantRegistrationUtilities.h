/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentSetupAssistantRegistrationUtilities : NSObject

+ (id)_bridgeContextDefaultLocalCredential;
+ (void)_bridgeCredentials:(id)arg1 completion:(id /* block */)arg2;
+ (BOOL)_bridgeNeedsToRun:(unsigned int*)arg1;
+ (void)_bridgePreflight:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)_handlePreflightFinishedWithSuccess:(BOOL)arg1 paymentCredentials:(id)arg2 provisioningController:(id)arg3 completion:(id /* block */)arg4;
+ (BOOL)_phoneNeedsToRun:(unsigned int*)arg1;
+ (void)_phonePreflight:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)preflightPaymentSetupProvisioningController:(id)arg1 forSetupAssistant:(unsigned int)arg2 withCompletion:(id /* block */)arg3;
+ (BOOL)setupAssistantNeedsToRun:(unsigned int)arg1 returningRequirements:(unsigned int*)arg2;

@end
