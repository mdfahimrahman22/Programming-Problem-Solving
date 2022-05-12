//#include<bits/stdc++.h>
//#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
//using namespace std;
//int main()
//{
//    fastIo
////    freopen("input.txt","r",stdin);
//
//    int t,n,input;
//    cin>>t;
//    while(t--)
//    {
//        cin>>n;
//        vector<int> even,odd;
//        vector<int> alice,bob;
//
//        for(int i=0; i<n; i++)
//        {
//            cin>>input;
//            if(!(input&1))even.push_back(input);
//            else odd.push_back(input);
//        }
//        sort(even.begin(),even.end());
//        sort(odd.begin(),odd.end());
//        bool alice_down=false,bob_down=false;
//        bool alice_turn=true;
//        while(!alice_down||!bob_down)
//        {
//
//            int even_size=even.size();
//            int odd_size=odd.size();
//            if(even_size==0&&odd_size==0)break;
//
//            if(alice.size()==0)
//            {
//                if(even_size>odd_size)
//                {
//                    if(odd_size==1)
//                    {
//                        alice.push_back(odd.back());
//                        odd.pop_back();
//                    }
//                    else
//                    {
//                        alice.push_back(even.back());
//                        even.pop_back();
//                    }
//                }
//                else if(even_size<odd_size)
//                {
//                    if(even_size==1)
//                    {
//                        alice.push_back(even.back());
//                        even.pop_back();
//                    }
//                    else
//                    {
//                        alice.push_back(odd.back());
//                        odd.pop_back();
//                    }
//
//                }
//                else
//                {
//                    if(even.back()>=odd.back())
//                    {
//                        alice.push_back(even.back());
//                        even.pop_back();
//                    }
//                    else
//                    {
//                        alice.push_back(odd.back());
//                        odd.pop_back();
//                    }
//                }
//                alice_turn=false;
//                continue;
//            }
//
//            if(bob.size()==0)//Bob's first move
//            {
//                if(odd_size==0&&even_size!=0)
//                {
//                    bob.push_back(even.back());
//                    even.pop_back();
//                }
//                else if(odd_size!=0&&even_size==0)
//                {
//                    bob.push_back(odd.back());
//                    odd.pop_back();
//                }
//                else if(even.back()>=odd.back())
//                {
//                    bob.push_back(even.back());
//                    even.pop_back();
//                }
//                else
//                {
//                    bob.push_back(odd.back());
//                    odd.pop_back();
//                }
//
//                alice_turn=true;
//                continue;
//            }
//
//            if(alice_turn)
//            {
//                if(alice_down)
//                {
//                    alice_turn=false;
//                    continue;
//                }
//                if(alice.back()%2==0)//alice[n-1]==Even
//                {
//                    if(odd_size>0)
//                    {
//                        alice.push_back(odd.back());
//                        odd.pop_back();
//                    }
//                    else
//                    {
//                        alice_down=true;
//                    }
//
//                }
//                else
//                {
//                    if(even_size>0)
//                    {
//                        alice.push_back(even.back());
//                        even.pop_back();
//                    }
//                    else
//                    {
//                        alice_down=true;
//                    }
//                }
//                alice_turn=false;
//            }
//            else
//            {
//                if(bob_down)
//                {
//                    alice_turn=true;
//                    continue;
//                }
//                if(bob.back()%2==0)//bob[n-1]==Even
//                {
//                    if(odd_size>0)
//                    {
//                        bob.push_back(odd.back());
//                        odd.pop_back();
//                    }
//                    else
//                    {
//                        bob_down=true;
//                    }
//                }
//                else
//                {
//                    if(even_size>0)
//                    {
//                        bob.push_back(even.back());
//                        even.pop_back();
//                    }
//                    else
//                    {
//                        bob_down=true;
//                    }
//                }
//                alice_turn=true;
//            }
//        }
//        int sum=0;
//        for(int i=0; i<alice.size(); i++)
//        {
////            cout<<alice[i]<<endl;
//            sum+=alice[i];
//        }
//        cout<<sum<<endl;
//    }
//
//    return 0;
//}
